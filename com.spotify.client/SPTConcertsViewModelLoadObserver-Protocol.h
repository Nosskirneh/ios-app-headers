//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTConcertsViewModel;

@protocol SPTConcertsViewModelLoadObserver <NSObject>
- (void)concertsModelFailedToLoadConcertsForTrack:(SPTConcertsViewModel *)arg1;
- (void)concertsModelDidLoadConcertsForTrack:(SPTConcertsViewModel *)arg1;
- (void)concertsModelDidLoadColorForTrack:(SPTConcertsViewModel *)arg1;
@end
