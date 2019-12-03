//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MobFoxAdTagDelegate-Protocol.h"
#import "MobFoxCustomEventDelegate-Protocol.h"

@class MFLocationServicesManager, MobFoxCustomEvent, MobFoxCustomEventRequest, MobFoxTagAd, MobFoxWaterfallAdRequest, NSArray, NSCondition, NSDate, NSLock, NSMutableArray, NSNumber, NSString;
@protocol MobFoxAdDelegate;

@interface MobFoxAd : UIView <MobFoxCustomEventDelegate, MobFoxAdTagDelegate>
{
    _Bool _gdpr;
    _Bool _v_autoplay;
    _Bool _start_muted;
    _Bool _skip;
    _Bool _dev_js;
    _Bool _imp_secure;
    _Bool _adspace_strict;
    _Bool _isAdLoaded;
    _Bool _isAdHidden;
    _Bool _isAdInitiated;
    _Bool _isReady;
    _Bool _isResponseTimeout;
    _Bool _moat;
    id <MobFoxAdDelegate> _delegate;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_demo_gender;
    NSString *_demo_age;
    NSString *_r_floor;
    NSString *_gdpr_consent;
    NSNumber *_v_dur_min;
    NSNumber *_v_dur_max;
    NSString *_invh;
    NSNumber *_refresh;
    NSString *_v_rewarded;
    NSString *_debugReqURLStr;
    NSString *_debugReqCustomEventURLStr;
    NSString *_debug_ad_request_url;
    NSString *_adapter;
    NSString *_idfaString;
    NSDate *_reqStartTime;
    NSCondition *_readyCond;
    NSArray *_events;
    NSMutableArray *_cacheVideoURLArr;
    NSLock *_responseLock;
    NSNumber *_adspace_width;
    NSNumber *_adspace_height;
    NSString *_response;
    NSString *_type;
    MobFoxWaterfallAdRequest *_req;
    MobFoxCustomEventRequest *_ceReq;
    MFLocationServicesManager *_locationServicesManager;
    MobFoxTagAd *_tagAd;
    MobFoxCustomEvent *_ce;
    NSString *_s_subid;
    NSString *_sub_name;
    NSString *_sub_domain;
    NSString *_sub_storeurl;
}

@property(copy, nonatomic) NSString *sub_storeurl; // @synthesize sub_storeurl=_sub_storeurl;
@property(copy, nonatomic) NSString *sub_domain; // @synthesize sub_domain=_sub_domain;
@property(copy, nonatomic) NSString *sub_name; // @synthesize sub_name=_sub_name;
@property(copy, nonatomic) NSString *s_subid; // @synthesize s_subid=_s_subid;
@property(retain, nonatomic) MobFoxCustomEvent *ce; // @synthesize ce=_ce;
@property(retain, nonatomic) MobFoxTagAd *tagAd; // @synthesize tagAd=_tagAd;
@property(retain, nonatomic) MFLocationServicesManager *locationServicesManager; // @synthesize locationServicesManager=_locationServicesManager;
@property(retain, nonatomic) MobFoxCustomEventRequest *ceReq; // @synthesize ceReq=_ceReq;
@property(retain, nonatomic) MobFoxWaterfallAdRequest *req; // @synthesize req=_req;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *response; // @synthesize response=_response;
@property(nonatomic) _Bool moat; // @synthesize moat=_moat;
@property(copy, nonatomic) NSNumber *adspace_height; // @synthesize adspace_height=_adspace_height;
@property(copy, nonatomic) NSNumber *adspace_width; // @synthesize adspace_width=_adspace_width;
@property(nonatomic) _Bool isResponseTimeout; // @synthesize isResponseTimeout=_isResponseTimeout;
@property(retain, nonatomic) NSLock *responseLock; // @synthesize responseLock=_responseLock;
@property(retain, nonatomic) NSMutableArray *cacheVideoURLArr; // @synthesize cacheVideoURLArr=_cacheVideoURLArr;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSCondition *readyCond; // @synthesize readyCond=_readyCond;
@property(retain, nonatomic) NSDate *reqStartTime; // @synthesize reqStartTime=_reqStartTime;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) _Bool isAdInitiated; // @synthesize isAdInitiated=_isAdInitiated;
@property(nonatomic) _Bool isAdHidden; // @synthesize isAdHidden=_isAdHidden;
@property(nonatomic) _Bool isAdLoaded; // @synthesize isAdLoaded=_isAdLoaded;
@property(retain, nonatomic) NSString *idfaString; // @synthesize idfaString=_idfaString;
@property(retain, nonatomic) NSString *adapter; // @synthesize adapter=_adapter;
@property(copy, nonatomic) NSString *debug_ad_request_url; // @synthesize debug_ad_request_url=_debug_ad_request_url;
@property(copy, nonatomic) NSString *debugReqCustomEventURLStr; // @synthesize debugReqCustomEventURLStr=_debugReqCustomEventURLStr;
@property(copy, nonatomic) NSString *debugReqURLStr; // @synthesize debugReqURLStr=_debugReqURLStr;
@property(nonatomic, getter=isAdspace_strict) _Bool adspace_strict; // @synthesize adspace_strict=_adspace_strict;
@property(nonatomic) _Bool imp_secure; // @synthesize imp_secure=_imp_secure;
@property(nonatomic) _Bool dev_js; // @synthesize dev_js=_dev_js;
@property(nonatomic) _Bool skip; // @synthesize skip=_skip;
@property(nonatomic) _Bool start_muted; // @synthesize start_muted=_start_muted;
@property(nonatomic) _Bool v_autoplay; // @synthesize v_autoplay=_v_autoplay;
@property(nonatomic) NSString *v_rewarded; // @synthesize v_rewarded=_v_rewarded;
@property(retain, nonatomic) NSNumber *refresh; // @synthesize refresh=_refresh;
@property(retain, nonatomic) NSString *invh; // @synthesize invh=_invh;
@property(copy, nonatomic) NSNumber *v_dur_max; // @synthesize v_dur_max=_v_dur_max;
@property(copy, nonatomic) NSNumber *v_dur_min; // @synthesize v_dur_min=_v_dur_min;
@property(retain, nonatomic) NSString *gdpr_consent; // @synthesize gdpr_consent=_gdpr_consent;
@property(nonatomic) _Bool gdpr; // @synthesize gdpr=_gdpr;
@property(copy, nonatomic) NSString *r_floor; // @synthesize r_floor=_r_floor;
@property(copy, nonatomic) NSString *demo_age; // @synthesize demo_age=_demo_age;
@property(copy, nonatomic) NSString *demo_gender; // @synthesize demo_gender=_demo_gender;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) __weak id <MobFoxAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MFCustomEventMobFoxAdFinished;
- (void)MFCustomEventMobFoxAdClicked;
- (void)MFCustomEventAdClosed;
- (void)MFCustomEventAdDidFailToReceiveAdWithError:(id)arg1;
- (void)MFCustomEventAd:(id)arg1 didLoad:(id)arg2;
- (void)MobFoxTagAdClicked;
- (void)MobFoxTagAdDidFailToReceiveAdWithError:(id)arg1;
- (void)MobFoxTagAdDidLoad:(id)arg1;
- (void)dealloc;
- (_Bool)isViewVisible;
- (void)loadAd;
- (id)getURLStringFromPath:(id)arg1;
- (void)dispatchRefresh;
- (id)getCustomEventInfo;
- (void)renderMobFoxAd:(id)arg1;
- (id)getNonCachebleAdRequestParams;
- (id)getCachebleAdRequestParams;
- (id)init:(id)arg1 withFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
