//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MobFoxWebViewAdDelegate-Protocol.h"

@class MFMoatHandler, MobFoxInterstitialViewController, MobFoxWaterfallAdRequest, MobFoxWebView, NSMutableArray, NSNumber, NSString, UIViewController;
@protocol MobFoxTagInterstitialAdDelegate;

@interface MobFoxTagInterstitialAd : NSObject <MobFoxWebViewAdDelegate>
{
    _Bool _v_autoplay;
    _Bool _v_startmute;
    _Bool _c_mraid;
    _Bool _dev_js;
    _Bool _imp_secure;
    _Bool _ready;
    _Bool _gdpr;
    _Bool _shown;
    _Bool _moat;
    id <MobFoxTagInterstitialAdDelegate> _delegate;
    UIViewController *_rootViewController;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_demo_gender;
    NSString *_accuracy;
    NSString *_demo_age;
    NSString *_s_subid;
    NSString *_sub_name;
    NSString *_sub_domain;
    NSString *_sub_storeurl;
    NSString *_r_floor;
    NSString *_v_rewarded;
    NSNumber *_v_dur_min;
    NSNumber *_v_dur_max;
    NSString *_invh;
    NSString *_gdpr_consent;
    NSNumber *_adspace_width;
    NSNumber *_adspace_height;
    NSString *_type;
    NSString *_response;
    NSString *_version_suffix;
    MobFoxWebView *_webview;
    MobFoxInterstitialViewController *_interstitialVC;
    MobFoxWaterfallAdRequest *_req;
    NSMutableArray *_notifsTokens;
    MFMoatHandler *_moatHandler;
}

@property(nonatomic) _Bool moat; // @synthesize moat=_moat;
@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
@property(retain, nonatomic) MFMoatHandler *moatHandler; // @synthesize moatHandler=_moatHandler;
@property(retain, nonatomic) NSMutableArray *notifsTokens; // @synthesize notifsTokens=_notifsTokens;
@property(retain, nonatomic) MobFoxWaterfallAdRequest *req; // @synthesize req=_req;
@property(retain, nonatomic) MobFoxInterstitialViewController *interstitialVC; // @synthesize interstitialVC=_interstitialVC;
@property(retain, nonatomic) MobFoxWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSString *version_suffix; // @synthesize version_suffix=_version_suffix;
@property(retain, nonatomic) NSString *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *adspace_height; // @synthesize adspace_height=_adspace_height;
@property(copy, nonatomic) NSNumber *adspace_width; // @synthesize adspace_width=_adspace_width;
@property(retain, nonatomic) NSString *gdpr_consent; // @synthesize gdpr_consent=_gdpr_consent;
@property(nonatomic) _Bool gdpr; // @synthesize gdpr=_gdpr;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) _Bool imp_secure; // @synthesize imp_secure=_imp_secure;
@property(nonatomic) _Bool dev_js; // @synthesize dev_js=_dev_js;
@property(nonatomic) _Bool c_mraid; // @synthesize c_mraid=_c_mraid;
@property(retain, nonatomic) NSString *invh; // @synthesize invh=_invh;
@property(nonatomic) _Bool v_startmute; // @synthesize v_startmute=_v_startmute;
@property(nonatomic) _Bool v_autoplay; // @synthesize v_autoplay=_v_autoplay;
@property(copy, nonatomic) NSNumber *v_dur_max; // @synthesize v_dur_max=_v_dur_max;
@property(copy, nonatomic) NSNumber *v_dur_min; // @synthesize v_dur_min=_v_dur_min;
@property(retain, nonatomic) NSString *v_rewarded; // @synthesize v_rewarded=_v_rewarded;
@property(copy, nonatomic) NSString *r_floor; // @synthesize r_floor=_r_floor;
@property(copy, nonatomic) NSString *sub_storeurl; // @synthesize sub_storeurl=_sub_storeurl;
@property(copy, nonatomic) NSString *sub_domain; // @synthesize sub_domain=_sub_domain;
@property(copy, nonatomic) NSString *sub_name; // @synthesize sub_name=_sub_name;
@property(copy, nonatomic) NSString *s_subid; // @synthesize s_subid=_s_subid;
@property(copy, nonatomic) NSString *demo_age; // @synthesize demo_age=_demo_age;
@property(copy, nonatomic) NSString *accuracy; // @synthesize accuracy=_accuracy;
@property(copy, nonatomic) NSString *demo_gender; // @synthesize demo_gender=_demo_gender;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <MobFoxTagInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)MobFoxWebViewAdSucceeded;
- (void)MobFoxWebViewAdReady;
- (void)MobFoxWebViewAdClose;
- (void)MobFoxWebViewAdClicked;
- (void)dismissAd;
- (void)show;
- (void)reportErrorToDelegate:(id)arg1;
- (void)loadAd;
- (id)getNonCachebleAdRequestParams;
- (id)getCachebleAdRequestParams;
- (id)init:(id)arg1 withRootViewController:(id)arg2;
- (id)init:(id)arg1;
- (id)initWithMoPubAdaper:(id)arg1;
- (id)initWithAdMobAdaper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

