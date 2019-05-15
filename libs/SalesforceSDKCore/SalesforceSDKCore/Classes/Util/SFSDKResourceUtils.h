/*
 Copyright (c) 2012-present, salesforce.com, inc. All rights reserved.
 Author: Kevin Hawkins
 
 Redistribution and use of this software in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this list of conditions
 and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of
 conditions and the following disclaimer in the documentation and/or other materials provided
 with the distribution.
 * Neither the name of salesforce.com, inc. nor the names of its contributors may be used to
 endorse or promote products derived from this software without specific prior written
 permission of salesforce.com, inc.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SalesforceSDKConstants.h"
NS_ASSUME_NONNULL_BEGIN

/** 
 * Class that handles access to Mobile SDK's main bundle.
 */
@interface SFSDKResourceUtils : NSObject

/**
 * @return The main bundle associated with the SDK.
 */
+ (NSBundle *)mainSdkBundle;

/**
 * Gets a localized string from the main bundle of the SDK.
 * @param localizationKey The localization key used to look up the localized string.
 * @return The localized string associated with the key.
 */
+ (NSString *)localizedString:(NSString *)localizationKey;

/**
 * Gets an image from the Images asset catalog from the framework bundle of the SDK
 * @param name The name of the image in the asset catalog.
 * @return The image from the asset catalog with the provided name.
*/
+ (UIImage *)imageNamed:(NSString*)name;

/**
 * Read config and parse its content (which is expected to be json)
 * @param configFilePath Path of resource file.
 * @return NSDictionary built from content of tile.
 */
+ (NSDictionary *)loadConfigFromFile:(NSString *)configFilePath SFSDK_DEPRECATED(7.1, 8.0, "Use loadConfigFromFile:configFilePath:error instead");


/**
 * Read config and parse its content (which is expected to be json)
 * @param configFilePath Path of resource file.
 * @param error Sets/returns any error that took place when trying to read file.
 * @return NSDictionary built from content of tile.
 */
+ (NSDictionary *)loadConfigFromFile:(NSString *)configFilePath error:(NSError**)error;

@end

NS_ASSUME_NONNULL_END
