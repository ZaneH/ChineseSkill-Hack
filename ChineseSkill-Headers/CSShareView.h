/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "UITextViewDelegate.h"
#import "CSReportStatusDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSString, UITextView, UIView, UserStatisticsPayloadModel, UIButton, UIImage, UILabel;
@protocol CSShareButtonDelegate;

__attribute__((visibility("hidden")))
@interface CSShareView : XXUnknownSuperclass <UITextViewDelegate, CSReportStatusDelegate> {
	int _nameofsns;
	BOOL _noticeBtn1Selected;
	BOOL _noticeBtn2Selected;
	NSString* _text;
	UIImage* _sendImage;
	int _nameOfSNS;
	UITextView* _tv;
	UserStatisticsPayloadModel* _payloadModel;
	id<CSShareButtonDelegate> _delegate;
	UIImageView* _up;
	UIImageView* _down;
	UILabel* _countLabel;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	UIButton* _btn;
	UIImageView* _shapePin;
	UIButton* _btnL;
	UIButton* _btnR;
	UIView* _openedImageBackground;
	UIImageView* _openedImage;
	CGRect _tempF;
}
@property(retain, nonatomic) UIButton* btn;
@property(retain, nonatomic) UIButton* btnL;
@property(retain, nonatomic) UIButton* btnR;
@property(retain, nonatomic) UILabel* countLabel;
@property(readonly, copy) NSString* debugDescription;
@property(assign, nonatomic) __weak id<CSShareButtonDelegate> delegate;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) UIImageView* down;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImageView* imageView;
@property(assign, nonatomic) int nameOfSNS;
@property(assign, nonatomic) BOOL noticeBtn1Selected;
@property(assign, nonatomic) BOOL noticeBtn2Selected;
@property(retain, nonatomic) UIImageView* openedImage;
@property(retain, nonatomic) UIView* openedImageBackground;
@property(retain, nonatomic) UserStatisticsPayloadModel* payloadModel;
@property(retain, nonatomic) UIImage* sendImage;
@property(retain, nonatomic) UIImageView* shapePin;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) CGRect tempF;
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UITextView* tv;
@property(retain, nonatomic) UIImageView* up;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)closeImage;
- (void)dealloc;
- (void)didClickedLeftButton;
- (void)didClickedRightButton;
- (void)imagevBeClicked:(id)clicked;
- (void)noticeBtnTaped:(id)taped;
- (void)noticeSelectBtn:(id)btn;
- (void)sendReportSuccess;
- (void)setupBottomView;
- (void)setupButton;
- (void)setupNoticeLabel;
- (void)setupSendImage:(id)image;
- (void)setupTextView:(id)view;
- (void)textViewCanbeEdit:(BOOL)edit;
- (void)textViewDidChange:(id)textView;
@end

