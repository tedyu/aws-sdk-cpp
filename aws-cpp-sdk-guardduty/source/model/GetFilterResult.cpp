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

#include <aws/guardduty/model/GetFilterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFilterResult::GetFilterResult() : 
    m_action(FilterAction::NOT_SET),
    m_rank(0)
{
}

GetFilterResult::GetFilterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_action(FilterAction::NOT_SET),
    m_rank(0)
{
  *this = result;
}

GetFilterResult& GetFilterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = FilterActionMapper::GetFilterActionForName(jsonValue.GetString("action"));

  }

  if(jsonValue.ValueExists("rank"))
  {
    m_rank = jsonValue.GetInteger("rank");

  }

  if(jsonValue.ValueExists("findingCriteria"))
  {
    m_findingCriteria = jsonValue.GetObject("findingCriteria");

  }



  return *this;
}
