//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ContentSourceDelegate;

@protocol ContentSource <NSObject>
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) id sectionInfo;
@property(nonatomic) __weak id <ContentSourceDelegate> delegate;
- (void)loadContent;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end
