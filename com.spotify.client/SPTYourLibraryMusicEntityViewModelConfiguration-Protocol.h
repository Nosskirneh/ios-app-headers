//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTYourLibraryMusicEntityViewModelConfiguration <NSObject>
@property(readonly, nonatomic) unsigned long long scrollIndexMinimumDisplayRowCount;
@property(readonly, nonatomic) unsigned long long trailingAccessoryType;
- (void)persistCollapsed:(_Bool)arg1 forSection:(long long)arg2;
- (_Bool)collapsedSection:(long long)arg1;
- (NSString *)subtitleForSection:(long long)arg1;
- (NSString *)titleForSection:(long long)arg1;
- (_Bool)showHeaderForSection:(unsigned long long)arg1;
- (_Bool)showSectionInModalMode:(unsigned long long)arg1;
@end

