//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDataStorageRequestControllerFactory;

@interface AddToPlaylistStorageControllerFactory : NSObject
{
    CoreDataStorageRequestControllerFactory *_coreDataStorageRequestControllerFactory;
}

@property(readonly, nonatomic) CoreDataStorageRequestControllerFactory *coreDataStorageRequestControllerFactory; // @synthesize coreDataStorageRequestControllerFactory=_coreDataStorageRequestControllerFactory;
- (void).cxx_destruct;
- (id)propertiesToFetch;
- (id)storageRequestForUserUrn:(id)arg1;
- (id)requestControllerForUserUrn:(id)arg1;
- (id)initWithCoreDataFactory:(id)arg1;
- (id)init;

@end
