//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession, SPTAccesspointWebTokenRequest;
@protocol SPTLinkDispatcher, SPTProductState;

@interface SPTModerationLegacyReportAbuseManager : NSObject
{
    SPSession *_session;
    id <SPTProductState> _productState;
    SPTAccesspointWebTokenRequest *_webTokenRequest;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTAccesspointWebTokenRequest *webTokenRequest; // @synthesize webTokenRequest=_webTokenRequest;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)abortRequestWebAccessToken;
- (void)showAbuseReportForURL:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 productState:(id)arg2 linkDispatcher:(id)arg3;

@end

