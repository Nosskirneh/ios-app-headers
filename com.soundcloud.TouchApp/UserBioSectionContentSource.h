//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentSource-Protocol.h"
#import "ContentSourceDelegate-Protocol.h"

@class NSArray, NSString, UserInfo;
@protocol ContentSourceDelegate;

@interface UserBioSectionContentSource : NSObject <ContentSource, ContentSourceDelegate>
{
    id <ContentSourceDelegate> _delegate;
    NSArray *_items;
    UserInfo *_userInfo;
}

@property(readonly, nonatomic) UserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <ContentSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contentSourceDidReloadData:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)loadContent;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) id sectionInfo;
- (id)initWithUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

