//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject, NSString;

@protocol SPTSignupViewModel <NSObject>
@property(nonatomic) __weak id <SPTSignupViewModelDelegate> delegate;
@property(readonly, nonatomic) NSDictionary *validators;
- (void)validateFieldWithIdentifier:(NSString *)arg1 value:(NSObject *)arg2;
@end

