//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTDeepLink.h"

@interface MRTMarriottWebUniversalLink : MRTDeepLink
{
}

+ (id)deepLinkToAppNavigationParameterMap;
+ (_Bool)deepLinkParametersAreCaseSensitive;
+ (id)_URLPathToFeatureFlagMap;
+ (id)_URLPathToAppNavigationIdMap;
+ (id)featureFlagForURL:(id)arg1;
+ (id)destinationIdForURL:(id)arg1;
+ (id)URLFeatureIDParameterKey;
+ (id)supportedURLSchemes;
+ (_Bool)isFeatureFlagSupportedForURL:(id)arg1;
+ (_Bool)supportsURL:(id)arg1;
- (id)appNavigationDestinationString;
- (id)destinationIdForAppNavigationParameters:(id)arg1;

@end

