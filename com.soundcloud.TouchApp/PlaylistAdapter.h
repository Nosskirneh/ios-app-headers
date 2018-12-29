//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NewApiCoreDataAdapter-Protocol.h"

@class MiniUserAdapter, NSEntityDescription, NSManagedObjectContext, NSString;

@interface PlaylistAdapter : NSObject <NewApiCoreDataAdapter>
{
    NSManagedObjectContext *_context;
    MiniUserAdapter *_userAdapter;
    NSEntityDescription *_entityDescription;
}

@property(readonly, nonatomic) NSEntityDescription *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(readonly, nonatomic) MiniUserAdapter *userAdapter; // @synthesize userAdapter=_userAdapter;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)adaptApiPlaylist:(id)arg1 toPlaylist:(id)arg2 withUser:(id)arg3;
- (id)selectPlaylists:(id)arg1;
- (id)adapt:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 userAdapter:(id)arg2;
- (id)initWithManagedObjectContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
