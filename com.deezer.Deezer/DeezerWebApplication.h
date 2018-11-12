//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRLibraryObject-Protocol.h"
#import "DZRShareable-Protocol.h"
#import "DeezerBrowsable-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface DeezerWebApplication : NSObject <DZRLibraryObject, DZRShareable, DeezerBrowsable>
{
    _Bool fullObject;
    _Bool _isFavorite;
    _Bool _isDefault;
    NSString *_deezerId;
    NSString *_name;
    NSString *_url;
    NSString *_picture;
    NSString *_picture16x16;
    NSString *_picture150x150;
    long long _category;
    long long _permissions;
    NSString *_userId;
    NSMutableArray *_notificationArray;
    NSString *_appStoreUrl;
    NSArray *_tracksToAdd;
    id _observer;
}

+ (id)notificationIDArrayFromNotifications:(id)arg1;
+ (long long)permissionsFromString:(id)arg1;
+ (id)deezerUrlWithId:(id)arg1;
+ (_Bool)isValid:(id)arg1;
+ (void)checkIsFullyLoaded:(id)arg1;
+ (void)updateObject:(id)arg1 withDictionary:(id)arg2;
+ (id)webApplicationFromDictionary:(id)arg1;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(retain, nonatomic) NSArray *tracksToAdd; // @synthesize tracksToAdd=_tracksToAdd;
@property(retain, nonatomic) NSString *appStoreUrl; // @synthesize appStoreUrl=_appStoreUrl;
@property(nonatomic) _Bool fullObject; // @synthesize fullObject;
@property(retain, nonatomic) NSMutableArray *notificationArray; // @synthesize notificationArray=_notificationArray;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long permissions; // @synthesize permissions=_permissions;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *picture150x150; // @synthesize picture150x150=_picture150x150;
@property(retain, nonatomic) NSString *picture16x16; // @synthesize picture16x16=_picture16x16;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *deezerId; // @synthesize deezerId=_deezerId;
- (void).cxx_destruct;
- (_Bool)isEqualToObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)readNotifications;
- (id)unreadNotifications;
- (unsigned long long)readNotificationsCount;
- (unsigned long long)unreadNotificationsCount;
- (void)updateNotification:(id)arg1;
- (void)removeNotifications:(id)arg1;
- (void)markNotificationAsRead:(id)arg1;
- (void)checkIfNeedsFurtherLoadingAndCallback:(CDUnknownBlockType)arg1;
- (id)illustrations;
- (id)uniqueID;
- (id)deezerUrl;
- (id)coverUrlString;
- (id)coverUrl;
- (_Bool)hasPicture;
- (_Bool)hasAppStoreUrl;
- (void)updateDeezerWebAppWith:(id)arg1;
- (id)init;
- (void)removeFromLibraryInContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToLibraryInContext:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)mailSubject;
- (id)messageForActivityType:(id)arg1;
- (id)shareLinkURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
