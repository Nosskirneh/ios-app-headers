//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMService, SSOService, UINavigationController;
@protocol ASMOptions, GIDAuthBrowserOpener, SSOAuthorization;

@interface ASMScreenContext : NSObject
{
    _Bool _shouldEnforceGOONavigationController;
    _Bool _bypassWebviewWhitelist;
    ASMService *_service;
    id <SSOAuthorization> _authorization;
    UINavigationController *_navigationController;
    SSOService *_SSOService;
    id <ASMOptions> _options;
    id <GIDAuthBrowserOpener> _authBrowserOpener;
}

@property(nonatomic) _Bool bypassWebviewWhitelist; // @synthesize bypassWebviewWhitelist=_bypassWebviewWhitelist;
@property(retain, nonatomic) id <GIDAuthBrowserOpener> authBrowserOpener; // @synthesize authBrowserOpener=_authBrowserOpener;
@property(nonatomic) _Bool shouldEnforceGOONavigationController; // @synthesize shouldEnforceGOONavigationController=_shouldEnforceGOONavigationController;
@property(readonly, nonatomic) id <ASMOptions> options; // @synthesize options=_options;
@property(retain, nonatomic) SSOService *SSOService; // @synthesize SSOService=_SSOService;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
@property(readonly, nonatomic) ASMService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)initWithAuthorization:(id)arg1 navigationController:(id)arg2 SSOService:(id)arg3 options:(id)arg4 authBrowserOpener:(id)arg5;

@end

