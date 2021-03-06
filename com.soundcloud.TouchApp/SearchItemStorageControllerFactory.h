//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDataStorageRequestControllerFactory, NSManagedObjectContext;

@interface SearchItemStorageControllerFactory : NSObject
{
    CoreDataStorageRequestControllerFactory *_storageRequestControllerFactory;
    NSManagedObjectContext *_context;
}

@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CoreDataStorageRequestControllerFactory *storageRequestControllerFactory; // @synthesize storageRequestControllerFactory=_storageRequestControllerFactory;
- (void).cxx_destruct;
- (id)sortOptions;
- (id)highTierPredicateWithQuery:(id)arg1 filterType:(long long)arg2;
- (id)freeTierPredicateWithQuery:(id)arg1 filterType:(long long)arg2;
- (id)searchItemProperties;
- (id)searchItemRequestOptionsWithLimit:(unsigned long long)arg1;
- (id)highTierSearchItemRequest:(id)arg1 filterType:(long long)arg2;
- (id)freeTierSearchItemRequest:(id)arg1 filterType:(long long)arg2;
- (id)freeTierItemsRequestControllerForQuery:(id)arg1 filterType:(long long)arg2 limit:(unsigned long long)arg3;
- (id)highTierItemsRequestControllerForQuery:(id)arg1 filterType:(long long)arg2 limit:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 storageRequestControllerFactory:(id)arg2;
- (id)init;

@end

