//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SPTHomeMixDomainModel;

@protocol SPTHomeMixHeaderViewModel <NSObject>
@property(readonly, nonatomic, getter=isPlayButtonSelected) _Bool playButtonSelected;
@property(readonly, nonatomic) NSURL *mainImageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(copy, nonatomic) SPTHomeMixDomainModel *domainModel;
@property(readonly, nonatomic) NSURL *URI;
@property(nonatomic) __weak id <SPTHomeMixHeaderViewModelDelegate> delegate;
@end
