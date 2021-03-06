//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SSDKRegister : NSObject
{
    NSMutableDictionary *_platformsInfo;
}

@property(readonly, nonatomic) NSMutableDictionary *platformsInfo; // @synthesize platformsInfo=_platformsInfo;
- (void).cxx_destruct;
- (void)setupDouyinByAppKey:(id)arg1 appSecret:(id)arg2;
- (void)setupESurfingByAppKey:(id)arg1 appSecret:(id)arg2 appName:(id)arg3;
- (void)setupRedditByAppKey:(id)arg1 redirectUri:(id)arg2;
- (void)setupTelegramByBotToken:(id)arg1 botDomain:(id)arg2;
- (void)setupCMCCByAppId:(id)arg1 appKey:(id)arg2 displayUI:(_Bool)arg3;
- (void)setupMingDaoByAppKey:(id)arg1 appSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupSMSOpenCountryList:(_Bool)arg1;
- (void)setupLineAuthType:(unsigned long long)arg1;
- (void)setupYouTubeWithClientId:(id)arg1 clientSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupMeiPaiWithAppkey:(id)arg1;
- (void)setupDingTalkWithAppId:(id)arg1;
- (void)setupInstapaperWithConsumerKey:(id)arg1 consumerSecret:(id)arg2;
- (void)setupVKontakteWithApplicationId:(id)arg1 secretKey:(id)arg2 authType:(unsigned long long)arg3;
- (void)setupDropboxWithAppKey:(id)arg1 appSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupKaKaoWithAppkey:(id)arg1 restApiKey:(id)arg2 redirectUrl:(id)arg3;
- (void)setupPinterestByClientId:(id)arg1;
- (void)setupAliSocialWithAppId:(id)arg1;
- (void)setupYouDaoNoteWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 oauthCallback:(id)arg3;
- (void)setupFlickrWithApiKey:(id)arg1 apiSecret:(id)arg2;
- (void)setupTumblrByConsumerKey:(id)arg1 consumerSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupLinkedInByApiKey:(id)arg1 secretKey:(id)arg2 redirectUrl:(id)arg3;
- (void)setupInstagramWithClientId:(id)arg1 clientSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupGooglePlusByClientID:(id)arg1 clientSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupPocketWithConsumerKey:(id)arg1 redirectUrl:(id)arg2;
- (void)setupKaiXinByApiKey:(id)arg1 secretKey:(id)arg2 redirectUrl:(id)arg3;
- (void)setupRenRenWithAppId:(id)arg1 appKey:(id)arg2 secretKey:(id)arg3 authType:(unsigned long long)arg4;
- (void)setupDouBanWithApikey:(id)arg1 appSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupEvernoteByConsumerKey:(id)arg1 consumerSecret:(id)arg2 sandbox:(_Bool)arg3;
- (void)setupYiXinByAppId:(id)arg1 appSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupTencentWeiboWithAppkey:(id)arg1 appSecret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupFacebookWithAppkey:(id)arg1 appSecret:(id)arg2 displayName:(id)arg3;
- (void)setupTwitterWithKey:(id)arg1 secret:(id)arg2 redirectUrl:(id)arg3;
- (void)setupQQWithAppId:(id)arg1 appkey:(id)arg2;
- (void)setupWeChatWithAppId:(id)arg1 appSecret:(id)arg2;
- (void)setupSinaWeiboWithAppkey:(id)arg1 appSecret:(id)arg2 redirectUrl:(id)arg3;
- (id)init;

@end

