//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTInstrumentationTransport;

@interface SPTInstrumentationCoverageLogger : NSObject
{
    id <SPTInstrumentationTransport> _transport;
}

@property(readonly, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)notePageViewCoverageForPageViewIdentifier:(id)arg1 pageName:(id)arg2;
- (id)initWithTransport:(id)arg1;

@end

