//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLoginLogger;

@interface SPTLoginOpenEmailAppDialogLogger : NSObject
{
    id <SPTLoginLogger> _logger;
    NSString *_screenIdentifier;
}

@property(readonly, copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)adjustButtonIdentifierWithTitle:(id)arg1;
- (void)logUserDidTapDismissDialogButton;
- (void)logUserDidTapDialogButton:(id)arg1;
- (void)logUserDidSeeEmailDialog;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2;

@end

