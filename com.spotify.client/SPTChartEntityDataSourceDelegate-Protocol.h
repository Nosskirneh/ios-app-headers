//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTChart;
@protocol SPTChartEntityDataSource;

@protocol SPTChartEntityDataSourceDelegate <NSObject>
- (void)chartEntityDataSource:(id <SPTChartEntityDataSource>)arg1 didLoadChart:(SPTChart *)arg2;
- (void)chartEntityDataSource:(id <SPTChartEntityDataSource>)arg1 didEncounterError:(NSError *)arg2;
@end

