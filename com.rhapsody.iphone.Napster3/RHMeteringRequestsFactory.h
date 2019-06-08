//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSString, _TtC7Napster12Dependencies, _TtC7Napster17AccountController, _TtC7Napster17AppDelegateRouter;

@interface RHMeteringRequestsFactory : NSObject
{
    _TtC7Napster17AppDelegateRouter *_appDelegate;
    CTTelephonyNetworkInfo *_telephonyInfo;
    NSString *_appStartAction;
}

@property(readonly, nonatomic) NSString *appStartAction; // @synthesize appStartAction=_appStartAction;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telephonyInfo; // @synthesize telephonyInfo=_telephonyInfo;
@property(retain, nonatomic) _TtC7Napster17AppDelegateRouter *appDelegate; // @synthesize appDelegate=_appDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC7Napster17AccountController *accountController;
@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies;
- (id)networkSubtype;
- (id)networkType;
- (id)meteringHeaderParameters;
- (id)originParamsForOrigin:(id)arg1 age:(id)arg2;
- (id)parametersStringFromDictionary:(id)arg1;
- (id)meteringPostBodyWithAction:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 additionalParams:(id)arg4;
- (id)meteringRequestWithPostBody:(id)arg1;
- (id)downloadLatencyRequestWithStartDate:(id)arg1 endDate:(id)arg2 audioFormat:(id)arg3 contentd:(id)arg4 origin:(id)arg5 age:(id)arg6;
- (id)appStartSubJobLatencyRequestWithCategory:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 additionalParameters:(id)arg4;
- (id)appStartLatencyRequestWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)playbackErrorRequest:(id)arg1 errorDescription:(id)arg2 meteringAttributes:(id)arg3 sourceLocation:(id)arg4 playbackEnd:(id)arg5;
- (id)playbackLatencyRequestWithMeteringAttributes:(id)arg1 sourceLocationName:(id)arg2 playbackEnd:(id)arg3 origin:(id)arg4 age:(id)arg5 context:(id)arg6 repeatMode:(id)arg7 playlistRadio:(id)arg8;
- (id)initWithAppDelegate:(id)arg1;

@end

