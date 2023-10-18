// Fill out your copyright notice in the Description page of Project Settings.


#include "MediaLobbyWidget.h"
#include "Components/Button.h"

void UMediaLobbyWidget::NativeConstruct()
{
	btn_Back->OnClicked.AddDynamic(this, &UMediaLobbyWidget::BackSelectMode);
	btn_Join->OnClicked.AddDynamic(this, &UMediaLobbyWidget::JoinRoom);
	btn_CreateRoom->OnClicked.AddDynamic(this, &UMediaLobbyWidget::CreateRoom);
}

void UMediaLobbyWidget::BackSelectMode()
{
	//StartLevel�� ���ư���

}

void UMediaLobbyWidget::JoinRoom()
{
	//�������ϱ�

}

void UMediaLobbyWidget::CreateRoom()
{
	//�游���

}
