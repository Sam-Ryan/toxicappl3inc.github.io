//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"
#import "UIWebViewDelegate.h"
#import "USViewController.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UIView, UIWebView, USActionMap, USUpsightContentUnit;

@interface USContentUnitViewController : UIViewController <UIWebViewDelegate, UIViewControllerTransitioningDelegate, USViewController>
{
    UIWebView *_webView;
    UIView *_contentUnitView;
    UIButton *_closeButton;
    NSMutableDictionary *_viewData;
    id <USViewControllerDelegate> _delegate;
    double _timestamp;
    double _loadingTimeout;
    NSArray *_scopes;
    NSString *_postPresentationTrigger;
    USUpsightContentUnit *_contentUnit;
    USActionMap *_actionMap;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) USActionMap *actionMap; // @synthesize actionMap=_actionMap;
@property(retain, nonatomic) USUpsightContentUnit *contentUnit; // @synthesize contentUnit=_contentUnit;
@property(retain, nonatomic) NSString *postPresentationTrigger; // @synthesize postPresentationTrigger=_postPresentationTrigger;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(readonly, nonatomic) double loadingTimeout; // @synthesize loadingTimeout=_loadingTimeout;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property __weak id <USViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewControllerWithRoot:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildContent:(id)arg1 actionMap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)adjustContentUnitToContainerSize:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)failWithError:(id)arg1;
- (id)JSONStringWithObject:(id)arg1;
- (_Bool)sendCallback:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)handleLoadContextWithCallback:(id)arg1;
- (void)handleDispatchURL:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)viewDataForKey:(id)arg1;
- (void)setViewData:(id)arg1 forKey:(id)arg2;
- (void)updateViewDataWithDispatchContext:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *viewData; // @synthesize viewData=_viewData;
- (void)dismissController:(id)arg1;
- (void)presentCloseButtonWithDelay:(double)arg1;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIView *contentUnitView; // @synthesize contentUnitView=_contentUnitView;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end

