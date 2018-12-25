//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (ASPageTableMethods)
+ (struct NSMapTable *)pageTableWithLayoutAttributes:(id)arg1 contentSize:(struct CGSize)arg2 pageSize:(struct CGSize)arg3;
+ (struct NSMapTable *)pageTableForWeakObjectPointers;
+ (struct NSMapTable *)pageTableForStrongObjectPointers;
+ (id)pageTableWithValuePointerFunctions:(id)arg1;
- (void)removeObjectForPage:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forPage:(unsigned long long)arg2;
- (id)objectForPage:(unsigned long long)arg1;
@end

