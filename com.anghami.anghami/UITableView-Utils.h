//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (Utils)
- (long long)expectedSectionCountsAfterDeleteSection;
- (void)setExpectedSectionCountsAfterDeleteSection:(long long)arg1;
- (id)expectedSectionCountsAfterDelete;
- (void)setExpectedSectionCountsAfterDelete:(id)arg1;
- (void)safeDeleteSectionAtIndexPath:(id)arg1 withRowAnimation:(long long)arg2;
- (void)beginSafeDeleteSectionAtIndexPath:(id)arg1;
- (void)safeDeleteRowAtIndexPath:(id)arg1 withRowAnimation:(long long)arg2;
- (void)beginSafeDeleteRowAtIndexPath:(id)arg1;
@end

