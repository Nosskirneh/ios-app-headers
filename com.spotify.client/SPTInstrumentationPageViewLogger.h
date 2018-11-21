//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTInstrumentationPageViewData;
@protocol SPTInstrumentationTransport;

@interface SPTInstrumentationPageViewLogger : NSObject
{
    id <SPTInstrumentationTransport> _transport;
    SPTInstrumentationPageViewData *_currentData;
}

@property(retain, nonatomic) SPTInstrumentationPageViewData *currentData; // @synthesize currentData=_currentData;
@property(retain, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)sendPageViewExitForCurrentDataWithTimestamp:(long long)arg1;
- (void)exitCurrentPageWithTimestamp:(long long)arg1;
- (void)sendPageViewEnterWithPageIdentifier:(id)arg1 URI:(id)arg2 timestamp:(long long)arg3 navigationRootIdentifier:(id)arg4;
- (void)enterPageWithIdentifier:(id)arg1 URI:(id)arg2 timestamp:(long long)arg3 navigationRootIdentifier:(id)arg4;
- (id)initWithTransport:(id)arg1;

@end

