//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSString;

@interface CRSDKSettings : NSObject
{
    NSManagedObjectContext *_context;
    NSString *_appId;
}

+ (_Bool)checkNeedsNewSDKSettingsWithTTL:(id)arg1;
+ (id)generateKeyFromKeywords:(id)arg1;
+ (id)generateKeyFromKeywords:(id)arg1 class:(Class)arg2;
+ (id)responsivenessSettingsName;
+ (id)reportRateSettingNameForClass:(Class)arg1;
+ (id)reportFrequencySettingNameForClass:(Class)arg1;
+ (id)reportingEnabledSettingNameForClass:(Class)arg1;
+ (id)userMetadataReportRateSettingName;
+ (id)userMetadataReportFrequencySettingName;
+ (id)userMetadataReportingEnabledSettingName;
+ (id)userflowDefaultTimeoutSettingName;
+ (id)userflowTimeoutSettingName:(id)arg1;
+ (id)sendScreenUserflowsSettingName;
+ (id)userflowReportRateSettingName;
+ (id)userflowReportFrequencySettingName;
+ (id)userflowReportingEnabledSettingName;
+ (id)appLoadMinThresholdSettingName;
+ (id)appLoadSessionTimeoutThresholdSettingName;
+ (id)appLoadReportRateSettingName;
+ (id)appLoadReportFrequencySettingName;
+ (id)appLoadReportingEnabledBackgroundSettingName;
+ (id)appLoadReportingEnabledForegroundSettingName;
+ (id)appLoadReportingEnabledUserSessionSettingName;
+ (id)appLoadReportingEnabledSettingName;
+ (id)networkStatisticsReportRateSettingName;
+ (id)networkStatisticsReportFrequencySettingName;
+ (id)networkStatisticsReportingEnabledSettingName;
+ (id)exceptionReportRateSettingName;
+ (id)exceptionReportFrequencySettingName;
+ (id)exceptionReportingEnabledSettingName;
+ (id)crashReportRateSettingName;
+ (id)crashReportFrequencySettingName;
+ (id)crashReportingEnabledSettingName;
+ (id)appLagReportRateSettingName;
+ (id)appLagReportFrequencySettingName;
+ (id)appLagReportingEnabledSettingName;
+ (id)appHangReportRateSettingName;
+ (id)appHangReportFrequencySettingName;
+ (id)appHangReportingEnabledSettingName;
+ (id)ttlSettingName;
+ (id)optOutStatusSettingName;
+ (id)appConfigTtlSettingName;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)allUserflowTimeoutSettings;
- (void)configureUserflowTimeoutWithResponseJson:(id)arg1;
- (void)configureUserflowsWithResponseJson:(id)arg1;
- (void)configureAppHangWithResponseJson:(id)arg1;
- (void)configureApmWithResponseJson:(id)arg1;
- (void)configureMetadataWithResponseJson:(id)arg1;
- (void)configureAppLoadWithResponseJson:(id)arg1;
- (void)configureGlobalConfigWithResponseJson:(id)arg1;
- (void)configureExceptionWithResponseJson:(id)arg1;
- (void)configureCrashWithResponseJson:(id)arg1;
- (void)handleConfigResponseWithJson:(id)arg1;
- (void)handleConfigResponseWithData:(id)arg1;
- (void)refreshSdkSettingsForSession:(id)arg1 withAppLocator:(id)arg2 withSession:(id)arg3;
- (id)getSettingObjectForName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)observeSettingName:(id)arg1 observer:(id)arg2 selector:(SEL)arg3;
- (void)removeSettingName:(id)arg1;
- (void)setSettingName:(id)arg1 value:(id)arg2;
- (id)getSettingsWithFormat:(id)arg1;
- (id)getSettingValueForName:(id)arg1;
- (id)initWithContext:(id)arg1 appId:(id)arg2;
- (_Bool)backupOptOutStatusWithAppId:(id)arg1;
- (_Bool)getOptOutStatus;
- (void)setOptOutStatus:(_Bool)arg1;

@end

