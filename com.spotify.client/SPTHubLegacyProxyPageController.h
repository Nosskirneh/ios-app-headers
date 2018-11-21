//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLegacyPageController-Protocol.h"

@class NSString, NSURL;
@protocol SPTPageContainer;

@interface SPTHubLegacyProxyPageController : NSObject <SPTLegacyPageController>
{
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPageIdentifier:(id)arg1 pageURI:(id)arg2 title:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

