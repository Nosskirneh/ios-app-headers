//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol DZRURLHandlerDelegate;

@interface DZRURLHandler : NSObject
{
    id <DZRURLHandlerDelegate> _delegate;
    NSMutableArray *_routes;
}

+ (id)getObjectFromDeeplink:(id)arg1;
+ (void)saveObject:(id)arg1 forDeeplinkNavigation:(id)arg2;
+ (id)sharedURLHandler;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(nonatomic) __weak id <DZRURLHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleReferrer:(id)arg1;
- (_Bool)handleURL:(id)arg1;
- (void)toastRouter;
- (void)miscRouter;
- (void)safariRouter;
- (void)accountRouter;
- (void)newReleasesRouter;
- (void)dynamicPagesRouter;
- (void)profileRouter;
- (void)studioRouter;
- (void)audiobookRouter;
- (void)mixesRouter;
- (void)libraryRouter;
- (void)artistRouter;
- (void)playlistRouter;
- (void)albumRouter;
- (id)extractPlayOptionsRoute;
- (CDUnknownBlockType)playActionWithPlayableAtKey:(id)arg1;
- (id)extractListeningContextRouteWithParentIDAtKey:(id)arg1 andDefaultOrigin:(unsigned long long)arg2;
- (id)extractSongIdInfo;
- (id)extractShowLyricsInfo;
- (id)extractDownloadInfo;
- (id)extractAutoplayInfo;
- (void)talkRouter;
- (void)addRoute:(id)arg1;
- (id)init;

@end

