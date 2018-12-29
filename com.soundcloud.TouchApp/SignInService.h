//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AuthApi, OnePasswordExtension, UIApplication;
@protocol _TtP8Features23AppPerformanceProfiling_;

@interface SignInService : NSObject
{
    AuthApi *_authApi;
    UIApplication *_application;
    OnePasswordExtension *_onePasswordExtension;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
}

@property(readonly, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(readonly, nonatomic) OnePasswordExtension *onePasswordExtension; // @synthesize onePasswordExtension=_onePasswordExtension;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) AuthApi *authApi; // @synthesize authApi=_authApi;
- (void).cxx_destruct;
- (id)loadCredentialsFromOnePasswordOnViewController:(id)arg1 sender:(id)arg2;
- (id)signInWithDetails:(id)arg1;
- (id)initWithAuthApi:(id)arg1 application:(id)arg2 onePasswordExtension:(id)arg3 appPerformanceProfiler:(id)arg4;
- (id)init;

@end
