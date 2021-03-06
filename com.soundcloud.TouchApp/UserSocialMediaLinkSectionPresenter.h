//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentPresenter-Protocol.h"
#import "HeaderPresenter-Protocol.h"

@class NSString;

@interface UserSocialMediaLinkSectionPresenter : NSObject <ContentPresenter, HeaderPresenter>
{
}

@property(readonly, nonatomic) _Bool shouldAlwaysShowHeader;
- (id)headerIdentifierForInfo:(id)arg1;
- (struct CGSize)headerSizeForInfo:(id)arg1 inContentView:(id)arg2;
- (void)displayInfo:(id)arg1 inHeader:(id)arg2;
- (id)identifierForContent:(id)arg1;
- (struct CGSize)sizeForContent:(id)arg1 inContentView:(id)arg2;
- (void)displayContent:(id)arg1 inCell:(id)arg2;
- (void)registerInContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

