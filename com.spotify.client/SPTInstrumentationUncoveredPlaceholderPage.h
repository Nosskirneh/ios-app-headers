//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageController-Protocol.h"

@class NSString, NSURL;
@protocol SPTPageContainer;

@interface SPTInstrumentationUncoveredPlaceholderPage : NSObject <SPTPageController>
{
    NSString *_uncoveredClassName;
}

@property(copy, nonatomic) NSString *uncoveredClassName; // @synthesize uncoveredClassName=_uncoveredClassName;
- (void).cxx_destruct;
- (id)spt_instrumentationName;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)initWithPageName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

