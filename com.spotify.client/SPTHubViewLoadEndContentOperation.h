//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class SPTHubViewLoggerCoordinator;
@protocol HUBContentOperationDelegate;

@interface SPTHubViewLoadEndContentOperation : NSObject <HUBContentOperation>
{
    _Bool _viewLogged;
    id <HUBContentOperationDelegate> _delegate;
    SPTHubViewLoggerCoordinator *_coordinator;
}

@property(nonatomic) _Bool viewLogged; // @synthesize viewLogged=_viewLogged;
@property(retain, nonatomic) SPTHubViewLoggerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performForViewURI:(id)arg1 featureInfo:(id)arg2 connectivityState:(unsigned long long)arg3 viewModelBuilder:(id)arg4 previousError:(id)arg5;
- (id)initWithViewLoggerCoordinator:(id)arg1;

@end

