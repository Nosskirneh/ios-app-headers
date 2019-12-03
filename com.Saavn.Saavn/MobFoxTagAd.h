//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "MobFoxScriptHandlerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class MFMoatHandler, MobFoxUIDelegate, NSData, NSNumber, NSString;
@protocol MobFoxAdTagDelegate;

@interface MobFoxTagAd : WKWebView <WKNavigationDelegate, MobFoxScriptHandlerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _dev_js;
    _Bool _imp_secure;
    _Bool _adspace_strict;
    _Bool _gdpr;
    _Bool _adTouched;
    _Bool _moat;
    id <MobFoxAdTagDelegate> _delegate;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_accuracy;
    NSString *_demo_gender;
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
    NSString *_requestID;
    NSString *_gdpr_consent;
    NSString *_o_iosadvid;
    NSNumber *_adspace_width;
    NSNumber *_adspace_height;
    NSString *_position;
    NSString *_version_suffix;
    MobFoxUIDelegate *_mobFoxUIDelegate;
    NSData *_adResponse;
    NSString *_userAgent;
    MFMoatHandler *_moatHandler;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) MFMoatHandler *moatHandler; // @synthesize moatHandler=_moatHandler;
@property(nonatomic) _Bool moat; // @synthesize moat=_moat;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSData *adResponse; // @synthesize adResponse=_adResponse;
@property(retain, nonatomic) MobFoxUIDelegate *mobFoxUIDelegate; // @synthesize mobFoxUIDelegate=_mobFoxUIDelegate;
@property(nonatomic) _Bool adTouched; // @synthesize adTouched=_adTouched;
@property(retain, nonatomic) NSString *version_suffix; // @synthesize version_suffix=_version_suffix;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSNumber *adspace_height; // @synthesize adspace_height=_adspace_height;
@property(copy, nonatomic) NSNumber *adspace_width; // @synthesize adspace_width=_adspace_width;
@property(retain, nonatomic) NSString *o_iosadvid; // @synthesize o_iosadvid=_o_iosadvid;
@property(retain, nonatomic) NSString *gdpr_consent; // @synthesize gdpr_consent=_gdpr_consent;
@property(nonatomic) _Bool gdpr; // @synthesize gdpr=_gdpr;
@property(nonatomic) _Bool adspace_strict; // @synthesize adspace_strict=_adspace_strict;
@property(nonatomic) _Bool imp_secure; // @synthesize imp_secure=_imp_secure;
@property(nonatomic) _Bool dev_js; // @synthesize dev_js=_dev_js;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSString *invh; // @synthesize invh=_invh;
@property(copy, nonatomic) NSNumber *v_dur_max; // @synthesize v_dur_max=_v_dur_max;
@property(copy, nonatomic) NSNumber *v_dur_min; // @synthesize v_dur_min=_v_dur_min;
@property(copy, nonatomic) NSString *v_rewarded; // @synthesize v_rewarded=_v_rewarded;
@property(copy, nonatomic) NSString *r_floor; // @synthesize r_floor=_r_floor;
@property(copy, nonatomic) NSString *sub_storeurl; // @synthesize sub_storeurl=_sub_storeurl;
@property(copy, nonatomic) NSString *sub_domain; // @synthesize sub_domain=_sub_domain;
@property(copy, nonatomic) NSString *sub_name; // @synthesize sub_name=_sub_name;
@property(copy, nonatomic) NSString *s_subid; // @synthesize s_subid=_s_subid;
@property(copy, nonatomic) NSString *demo_age; // @synthesize demo_age=_demo_age;
@property(copy, nonatomic) NSString *demo_gender; // @synthesize demo_gender=_demo_gender;
@property(copy, nonatomic) NSString *accuracy; // @synthesize accuracy=_accuracy;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) __weak id <MobFoxAdTagDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)MobFoxScriptHandlerOnAdClose;
- (void)MobFoxScriptHandlerOnFail:(id)arg1;
- (void)MobFoxScriptHandlerOnSuccess;
- (void)renderAd:(id)arg1 withNonCacheableParams:(id)arg2:(id)arg3 withType:(id)arg4 andWithMoat:(_Bool)arg5;
- (void)MobFoxScriptHandlerOnReady;
- (id)getAdRequestURL;
- (_Bool)isViewVisible;
- (id)matchPixelURLs:(id)arg1;
- (void)loadAd;
- (void)reportErrorToDelegate:(id)arg1;
- (struct CGSize)mostSuitableAdSize:(struct CGSize)arg1;
- (id)initForRenderingOnly:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)init:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithMoPubAdaper:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithAdMobAdaper:(id)arg1 withFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
