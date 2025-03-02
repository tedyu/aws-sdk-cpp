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

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/IpSetFormat.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API CreateIPSetRequest : public GuardDutyRequest
  {
  public:
    CreateIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIPSet"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline CreateIPSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline CreateIPSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create an IPSet.</p>
     */
    inline CreateIPSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline CreateIPSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline CreateIPSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user friendly name to identify the IPSet. This name is displayed in all
     * findings that are triggered by activity that involves IP addresses included in
     * this IPSet.</p>
     */
    inline CreateIPSetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline const IpSetFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline void SetFormat(const IpSetFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline void SetFormat(IpSetFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline CreateIPSetRequest& WithFormat(const IpSetFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the file that contains the IPSet.</p>
     */
    inline CreateIPSetRequest& WithFormat(IpSetFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline CreateIPSetRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline CreateIPSetRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The URI of the file that contains the IPSet. For example
     * (https://s3.us-west-2.amazonaws.com/my-bucket/my-object-key)</p>
     */
    inline CreateIPSetRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>A boolean value that indicates whether GuardDuty is to start using the
     * uploaded IPSet.</p>
     */
    inline bool GetActivate() const{ return m_activate; }

    /**
     * <p>A boolean value that indicates whether GuardDuty is to start using the
     * uploaded IPSet.</p>
     */
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }

    /**
     * <p>A boolean value that indicates whether GuardDuty is to start using the
     * uploaded IPSet.</p>
     */
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }

    /**
     * <p>A boolean value that indicates whether GuardDuty is to start using the
     * uploaded IPSet.</p>
     */
    inline CreateIPSetRequest& WithActivate(bool value) { SetActivate(value); return *this;}


    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateIPSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateIPSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline CreateIPSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    IpSetFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    bool m_activate;
    bool m_activateHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
