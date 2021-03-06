//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AnalyticsToolStoreDelegate;

@interface AnalyticsToolStore : NSObject
{
    id <AnalyticsToolStoreDelegate> _delegate;
    NSMutableArray *_mutableStore;
}

@property(retain, nonatomic) NSMutableArray *mutableStore; // @synthesize mutableStore=_mutableStore;
@property(nonatomic) __weak id <AnalyticsToolStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)storedEvents;
- (void)clearStore;
- (void)recordEvent:(id)arg1;
- (id)init;

@end

