//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIView;

@protocol ELMScrollViewProtocol <NSObject>
- (UIView *)elementsViewForFooterInSection:(long long)arg1;
- (UIView *)elementsViewForHeaderInSection:(long long)arg1;
- (UIView *)elementsCellForItemAtIndexPath:(NSIndexPath *)arg1;
- (struct CGSize)elementsSizeForFooterInSection:(long long)arg1;
- (struct CGSize)elementsSizeForHeaderInSection:(long long)arg1;
- (struct CGSize)elementsSizeForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
@end

