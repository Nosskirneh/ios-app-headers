//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCollectionLayoutContext, NSMapTable;

@interface ASCollectionLayoutState : NSObject
{
    // Error parsing type: {Mutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: __instanceLock__
    struct CGSize _contentSize;
    ASCollectionLayoutContext *_context;
    NSMapTable *_elementToLayoutAttributesTable;
    struct NSMapTable *_pageToLayoutAttributesTable;
    struct NSMapTable *_unmeasuredPageToLayoutAttributesTable;
}

+ (struct NSMapTable *)_unmeasuredLayoutAttributesTableFromTable:(id)arg1 contentSize:(struct CGSize)arg2 pageSize:(struct CGSize)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct NSMapTable *)getAndRemoveUnmeasuredLayoutAttributesPageTableInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElement:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)allLayoutAttributes;
@property(readonly) struct CGSize contentSize;
@property(readonly) ASCollectionLayoutContext *context;
- (id)initWithContext:(id)arg1 contentSize:(struct CGSize)arg2 elementToLayoutAttributesTable:(id)arg3;
- (id)initWithContext:(id)arg1 layout:(id)arg2 getElementBlock:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1;

@end

