//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPCMapTable;

@interface GPCMapTableReferenceGuard : NSObject
{
    id owner_;
    id key_;
    GPCMapTable *mapTable_;
}

+ (id)newGuardWithOwner:(id)arg1 key:(id)arg2 mapTable:(id)arg3;
- (void).cxx_destruct;
- (void)unhookFromOwner:(void *)arg1;
- (void)dealloc;

@end
