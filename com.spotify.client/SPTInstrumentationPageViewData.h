//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTInstrumentationPageViewData : NSObject
{
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    NSString *_navigationRootIdentifier;
}

@property(readonly, nonatomic) NSString *navigationRootIdentifier; // @synthesize navigationRootIdentifier=_navigationRootIdentifier;
@property(readonly, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (id)initWithPageIdentifier:(id)arg1 pageURI:(id)arg2 navigationRootIdentifier:(id)arg3;

@end
