//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderInstrumentationObserver.h"

@class NSString;

@interface SPTImageLoaderInstrumentationObserverMock : NSObject <SPTImageLoaderInstrumentationObserver>
{
    long long _numberOfTimesStartedCalled;
    long long _numberOfTimesCompletedCalled;
    long long _numberOfTimesFailedCalled;
}

@property(nonatomic) long long numberOfTimesFailedCalled; // @synthesize numberOfTimesFailedCalled=_numberOfTimesFailedCalled;
@property(nonatomic) long long numberOfTimesCompletedCalled; // @synthesize numberOfTimesCompletedCalled=_numberOfTimesCompletedCalled;
@property(nonatomic) long long numberOfTimesStartedCalled; // @synthesize numberOfTimesStartedCalled=_numberOfTimesStartedCalled;
- (void)logLoadingFailedForImageWithURI:(id)arg1;
- (void)logLoadingCompletedForImageWithURI:(id)arg1;
- (void)logLoadingStartedForImageWithURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

