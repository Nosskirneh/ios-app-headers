//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIViewController;
@protocol SPTPageCreationContext, SPTYourLibraryPage><SPTPageController;

@protocol SPTYourLibraryPageProvider <NSObject>
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long groupIdentifier;
@property(readonly, nonatomic) unsigned long long providerIdentifier;
- (_Bool)claimsURI:(NSURL *)arg1;
- (UIViewController<SPTYourLibraryPage><SPTPageController> *)pageViewControllerForContext:(id <SPTPageCreationContext>)arg1;
@end

