//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol SPTSearchFancyRecentsDataSource, SPTSearchLogger;

@interface SPTDeleteRecentCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTSearchFancyRecentsDataSource> _dataSource;
    id <SPTSearchLogger> _searchLogger;
}

@property(readonly, nonatomic) id <SPTSearchLogger> searchLogger; // @synthesize searchLogger=_searchLogger;
@property(readonly, nonatomic) id <SPTSearchFancyRecentsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithRecentsDataSource:(id)arg1 searchLogger:(id)arg2;

@end

