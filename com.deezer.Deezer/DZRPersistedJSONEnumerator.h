//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface DZRPersistedJSONEnumerator : NSEnumerator
{
    struct leveldb_iterator_t *_it;
    struct leveldb_readoptions_t *_options;
}

+ (id)enumeratorWithDatabase:(struct leveldb_t *)arg1;
- (id)nextObject;
- (void)dealloc;

@end
