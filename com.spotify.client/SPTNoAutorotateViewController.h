//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface SPTNoAutorotateViewController : UIViewController
{
    long long _supportedOrientation;
}

@property(nonatomic) long long supportedOrientation; // @synthesize supportedOrientation=_supportedOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithSupportedOrientation:(long long)arg1;

@end

