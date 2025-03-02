﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/guardduty/model/GetIPSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIPSetResult::GetIPSetResult() : 
    m_format(IpSetFormat::NOT_SET),
    m_status(IpSetStatus::NOT_SET)
{
}

GetIPSetResult::GetIPSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(IpSetFormat::NOT_SET),
    m_status(IpSetStatus::NOT_SET)
{
  *this = result;
}

GetIPSetResult& GetIPSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = IpSetFormatMapper::GetIpSetFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IpSetStatusMapper::GetIpSetStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
