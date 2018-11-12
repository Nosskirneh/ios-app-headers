//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTConcertsLocationSearchViewModel;

@protocol SPTConcertsLocationSearchViewModelDelegate <NSObject>
- (void)concertsLocationSearchViewModel:(SPTConcertsLocationSearchViewModel *)arg1 loadedResultsWithError:(NSError *)arg2;

@optional
- (void)concertsLocationSearchViewModel:(SPTConcertsLocationSearchViewModel *)arg1 isLoading:(_Bool)arg2;
- (void)concertsLocationSearchViewModel:(SPTConcertsLocationSearchViewModel *)arg1 failedWithError:(NSError *)arg2;
@end

