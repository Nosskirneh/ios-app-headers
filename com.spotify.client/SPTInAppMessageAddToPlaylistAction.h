//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageActionHandler-Protocol.h"

@class NSString;
@protocol SPTLinkDispatcher;

@interface SPTInAppMessageAddToPlaylistAction : NSObject <SPTInAppMessageActionHandler>
{
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)executeActionWithURL:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

