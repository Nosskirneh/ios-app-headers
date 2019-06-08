//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreenDelegate-Protocol.h"

@class NSString;

@protocol RAPISearchScreenDelegate <RAPIScreenDelegate>
- (NSString *)getStringForRow:(long long)arg1 forGroup:(long long)arg2;
- (long long)getItemCountForGroup:(long long)arg1;
- (void)onSearchStringChanged:(NSString *)arg1;

@optional
- (NSString *)getLabelForEmptyList;
- (NSString *)getMoreLabelForGroup:(long long)arg1;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (NSString *)getLoadingLabel;
- (_Bool)canProvideDataImmediately;
- (NSString *)getGroupLabelForGroup:(long long)arg1;
- (long long)getGroupCount;
@end

