//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GPMItemListMap : NSObject
{
    NSMapTable *_keyToSectionsMap;
}

- (void).cxx_destruct;
- (id)sectionNodeForKey:(id)arg1 section:(long long)arg2;
- (id)sectionMapTableForKey:(id)arg1;
- (struct _NSRange)itemRangeForKey:(id)arg1 section:(long long)arg2;
- (id)itemForKey:(id)arg1 atIndexPath:(id)arg2;
- (void)setItems:(id)arg1 forKey:(id)arg2 atSection:(long long)arg3;
- (void)addIndexPath:(id)arg1 forKey:(id)arg2;
- (id)sectionsForKey:(id)arg1;
- (id)keyEnumerator;
- (id)init;

@end
