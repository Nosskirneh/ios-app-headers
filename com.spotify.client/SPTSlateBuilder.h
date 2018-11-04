//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSlateBuilder.h"

@class NSMutableDictionary, NSString, UIColor;

@interface SPTSlateBuilder : NSObject <SPTSlateBuilder>
{
    id <SPTSlateDataSource> dataSource;
    id <SPTSlateDelegate> delegate;
    double cornerRadius;
    double shadowAlpha;
    UIColor *shadowColor;
    double shadowRadius;
    UIColor *backgroundColor;
    NSMutableDictionary *userInfo;
    struct CGSize slateSize;
    struct CGSize shadowOffset;
}

@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (void)setShadowRadius:(double)arg1;
@property(readonly, nonatomic) double shadowRadius;
- (void)setShadowOffset:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize shadowOffset;
- (void)setShadowColor:(id)arg1;
@property(readonly, nonatomic) UIColor *shadowColor;
- (void)setShadowAlpha:(double)arg1;
@property(readonly, nonatomic) double shadowAlpha;
- (void)setCornerRadius:(double)arg1;
@property(readonly, nonatomic) double cornerRadius;
- (void)setSlateSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize slateSize;
@property(nonatomic) __weak id <SPTSlateDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <SPTSlateDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

