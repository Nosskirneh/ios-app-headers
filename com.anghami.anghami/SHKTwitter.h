//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

@interface SHKTwitter : SHKSharer
{
}

+ (_Bool)twitterInstalled;
+ (_Bool)canShare;
+ (id)sharerTitle;
+ (id)sharerIcon;
- (_Bool)send;
- (void)shareViaSLCompose;
- (void)shareViaTwitterComposer;
- (void)showTwitterComposer;
- (void)showEnableTwitterAccounts;
- (void)shareOnTwitterAccount:(id)arg1;
- (void)downloadAndShareDeeplinkVideo;
- (void)performVideoLocalPathSharing;
- (void)share;

@end
