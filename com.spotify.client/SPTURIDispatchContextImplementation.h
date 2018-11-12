//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTURIDispatchContext-Protocol.h"

@class NSString;

@interface SPTURIDispatchContextImplementation : NSObject <SPTURIDispatchContext>
{
    _Bool _shouldUseCurrentStack;
    _Bool _popStackIfPossible;
    _Bool _shouldSuppressAnimations;
    _Bool _loggedIn;
    NSString *_sourceApplication;
    id _annotation;
}

@property(readonly, nonatomic, getter=isLoggedIn) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly, nonatomic) _Bool shouldSuppressAnimations; // @synthesize shouldSuppressAnimations=_shouldSuppressAnimations;
@property(readonly, nonatomic) _Bool popStackIfPossible; // @synthesize popStackIfPossible=_popStackIfPossible;
@property(readonly, nonatomic) _Bool shouldUseCurrentStack; // @synthesize shouldUseCurrentStack=_shouldUseCurrentStack;
@property(readonly, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(readonly, copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
- (void).cxx_destruct;
- (id)initWithSourceApplication:(id)arg1 annotation:(id)arg2 useCurrentStack:(_Bool)arg3 popStackIfPossible:(_Bool)arg4 suppressAnimations:(_Bool)arg5 loggedIn:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

