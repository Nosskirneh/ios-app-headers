//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTElementsStoreNotifier-Protocol.h"

@protocol YTElementsState <YTElementsStoreNotifier>
- (void)setModel:(id)arg1 forKey:(id)arg2 shouldNotify:(_Bool)arg3;
- (void)setModel:(id)arg1 forKey:(id)arg2;
- (id)modelForKey:(id)arg1;
@end
